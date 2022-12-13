#pragma once
#include <functional>
#include <cmath>
#include <vector>


using func = std::function<double(double, double)>;

inline std::vector<double> solve_heat_equation(size_t n, double a, double b, double m1, double m2, double xi, const func& k1,
                                               const func& k2, const func& q1, const func& q2, const func& f1, const func& f2)
{
	double h = (b - a) / n;
	size_t discont_index_a = static_cast<size_t>(xi / h) + 1;
	size_t discont_index_dp = static_cast<size_t>(xi / h - 0.5) + 1;
	std::vector<double> ai(n + 1), di(n), pi(n);

	double x = a; // текуща¤ точка вида 'x + h*i'
	for (size_t i = 1; i < discont_index_a; ++i, x += h)
	{
		ai[i] = h / k1(x, x + h);
	}
	ai[discont_index_a] = h / (k1(x, xi) + k2(xi, x + h));
	x += h;
	for (size_t i = discont_index_a + 1; i <= n; ++i, x += h)
	{
		ai[i] = h / k2(x, x + h);
	}

	x = a + h / 2;
	for (size_t i = 1; i < discont_index_dp; ++i, x += h)
	{
		di[i] = q1(x, x + h) / h;
		pi[i] = f1(x, x + h) / h;
	}
	di[discont_index_dp] = (q1(x, xi) + q2(xi, x + h)) / h;
	pi[discont_index_dp] = (f1(x, xi) + f2(xi, x + h)) / h;
	x += h;
	for (size_t i = discont_index_dp + 1; i < n; ++i, x += h)
	{
		di[i] = q2(x, x + h) / h;
		pi[i] = f2(x, x + h) / h;
	}


	double hi = 1 / h;
	std::vector<double> A(n), B(n), C(n);
	for (size_t i = 1; i < n; ++i)
	{
		A[i] = ai[i] * hi;
		B[i] = ai[i + 1] * hi;
		C[i] = (ai[i] + ai[i + 1]) * hi + di[i] * h;
		pi[i] *= h;
	}


	std::vector<double> alpha(n + 1), beta(n + 1);
	std::vector<double> y(n + 1);
	alpha[1] = 0, beta[1] = m1;
	for (size_t i = 1; i < n; ++i)
	{
		double divide = 1 / (C[i] - alpha[i] * A[i]);
		alpha[i + 1] = B[i] * divide;
		beta[i + 1] = (pi[i] + beta[i] * A[i]) * divide;
	}
	y[n] = m2;
	for (size_t i = n; i >= 1; --i)
		y[i - 1] = alpha[i] * y[i] + beta[i];

	return y;
}

const double C1 = 0.060557223;
const double C2 = -1.060557223;
const double C3 = -0.472024551;
const double C4 = -4.331084824;
const double C5 = sqrt(2.0 / 7.0);
const double C6 = sqrt(0.4);
const double C7 = exp(-0.4) / 0.16;
const double INV_3 = 1 / 3.0;


inline double u1(double x)
{
	return 1.0 + C1 * exp(C5 * x) + C2 * exp(-C5 * x);
}

inline double u2(double x)
{
	return C7 + C3 * exp(C6 * x) + C4 * exp(-C6 * x);
}

std::vector<double> get_true_test_solution(size_t n)
{
	std::vector<double> u(n + 1);
	double xc = 0.0;
	double h = 1.0 / (double)n;
	const size_t discont_pos = static_cast<size_t>(0.4 / h);

	xc = 0.0;
	for (size_t i = 0; i <= discont_pos; ++i, xc += h)
		u[i] = u1(xc);
	for (size_t i = discont_pos + 1; i <= n; ++i, xc += h)
		u[i] = u2(xc);
	return u;
}


inline double k1(double a, double b)
{
	return log((b + 1.0) / (a + 1.0));
}

inline double k2(double a, double b)
{
	return log(b / a);
}

inline double q1(double a, double b)
{
	return 0.5 * (b * b - a * a);
}

inline double q2(double a, double b)
{
	return INV_3 * (b * b * b - a * a * a);
}

inline double f1(double a, double b)
{
	return 0.5 * (b * b - a * a);
}

inline double f2(double a, double b)
{
	return exp(-a) - exp(-b);
}

std::vector<double> solve_main(size_t n)
{
	return solve_heat_equation(n, 0.0, 1.0, 0.0, 1.0, 0.4, k1, k2, q1, q2, f1, f2);
}

inline double k1t(double a, double b)
{
	return 1. / 1.4 * (b - a);
}

inline double k2t(double a, double b)
{
	return 1. / 0.4 * (b - a);
}

inline double q1t(double a, double b)
{
	return 0.4 * (b - a);
}

inline double q2t(double a, double b)
{
	return 0.4 * 0.4 * (b - a);
}

inline double f1t(double a, double b)
{
	return 0.4 * (b - a);
}

inline double f2t(double a, double b)
{
	return exp(-0.4) * (b - a);
}

std::vector<double> solve_test(size_t n)
{
	return solve_heat_equation(n, 0.0, 1.0, 0.0, 1.0, 0.4, k1t, k2t, q1t, q2t, f1t, f2t);
}