int volumeBalok(int p, int l, int t) {
	int vb;
	vb = p * l * t;
	return vb;
}

int luasPermukaanBalok(int p, int l, int t) {
	int lpb;
	lpb =  2 * ((p * l) + (p * t) + (l * t));
	return lpb;
}

int kelilingBalok(int p, int l, int t) {
	int kb;
	kb = 4 * (p + l + t);
	return kb;
}
