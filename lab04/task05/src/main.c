int main(){
	int x, y;
	x = 4;
	if (x < -1)
	y = -1 * (x+1);
	else if (x <= 0 && x >= -1)
	y = 1*x+1;
	else if (x <= 1 && x >= 0)
	y = -1 * (1*x-1);
	else if (x > 1)
	y = 1*x-1;
	return 0;
}
