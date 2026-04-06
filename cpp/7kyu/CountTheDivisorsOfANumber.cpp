int divisors(long long n) {
    if (n == 1) return 1;
    int ans = 1;

    int e = 0;
    while (n % 2 == 0) { n /= 2; ++e; }
    if (e) ans *= (e + 1);

    for (long long i = 3; i <= n / i; i += 2) {
        e = 0;
        while (n % i == 0) { n /= i; ++e; }
        if (e) ans *= (e + 1);
    }

    if (n > 1) ans *= 2;

    return ans;
}