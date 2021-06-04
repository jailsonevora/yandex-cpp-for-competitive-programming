void f(double d){
	unsigned i;
    for (i = 1 << 64; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}