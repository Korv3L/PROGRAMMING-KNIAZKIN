#define PI 3.14
#define R 7
int main () {
float result;
char command;
int square = R * R;
int cube = square * R;
command = 'L';
	if (command = 'L') {
	result = 2 * PI * R;
	}else if (command = 'V') {
	result = ( 4 / 3 ) * PI * cube;
	}else if (command = 'S') {
	result = PI * square;
	}
	return 0;
}
