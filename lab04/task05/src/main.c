int main(){
	int x, y;
	int ax , ay ;
	int bx , by ;
	int cx , cy ;
	int dx , dy ;
	int ex , ey ;
	int fx , fy ;
	int jx , jy ;
	ax = -3;
	ay = 2;
	bx = -2;
	by = 1;
	cx = -1;
	cy = 0;
	dx = 0;
	dy = 1;
	ex = 1;
	ey = 0;
	fx = 2;
	fy = 1;
	jx = 3;
	jy = 2; 
	int a = ax && ay;
	int b = bx && by;
	int c = cx && cy;
	int d = dx && dy;
	int e = ex && ey;
	int f = fx && fy;
	int j = jx && jy;
	y = c && d;
	x = 4;
	if ( y = a && b || b && c || a && c)
	y = -1 * (1*x+1);
	else if ( y = c && d )
	y = 1*x+1;
	else if ( y = d && e )
	y = -1 * (1*x-1);
	else if ( y = e && f || f && j || e && j)
	y = 1*x-1;
	return 0;
}
