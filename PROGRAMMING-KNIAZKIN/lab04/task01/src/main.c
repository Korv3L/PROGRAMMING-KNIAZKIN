#define PI 3.14
int main () {

int r = 7;
int s = 0;
int l = 0;
int v = 0;
int command = 0;
int square = r * r;
int cube = square * r;
l = 2 * PI * r;
v = ( 4 / 3 ) * PI * cube;
s = PI * square;

	if (command != s && command != v) {
	command == l;
	}
	if (command != l && command != s) {
	command == v;
	}
	if (command != v && command != l) {
	command == s;
	}
	command = v;
	return 0;
}
