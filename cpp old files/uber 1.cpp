typedef long long ll;

int powm(int x, int n, int r) {
	ll res = 1;
	while(n) {
		if (n % 2) (res *= x) %= r;
		x = ( 1LL * x * x ) % r;
		n /= 2;
	}
	return res;
}

int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            res -= res / i;
        }
    }
    if (n > 1)
        res -= res / n;
    return res;
}

int BigNumbers(int p, int q, int r) {
    int x = phi(r);
    int y = 1 % x;
    for(int i = 2;i <= q; i++)
        y = (y*i) % x;
    y += x;  
    return powm(p,y,r);
}
