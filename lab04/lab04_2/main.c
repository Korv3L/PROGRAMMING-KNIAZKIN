
int main () {
	float x;
	x = 123.656;
	int a , b;
	a = ( int ) x;
	b = ( x - a ) * 1000;
	float y =(int) ((float ) b / ( float ) a) + (( float )(( int )((( float ) b / ( float ) a) * 100) % 100) / 100);
	return 0;
}
