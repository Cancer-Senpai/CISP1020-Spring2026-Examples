#include <stdio.h>

int main() {

	int i = 42;
	double d = 3.14;
	double n;
	int x;
	char s[10];

	//cout << "hello world" << endl;
	printf("Hello world\n");
	printf("%d\n",i);
	printf("%d | %lf\n", i, d);
	
	//print with 3 digits to the right of the decimal and field width of 5
	//cout << setw(5) << setprecision(3) << d << endl;
	printf("%5.3lf\n",d);

	//cin >> d;
	printf("Enter a double: ");
	scanf("%lf", &n);
	printf("You entered: %lf\n", n);

	printf("Enter an int: ");
	scanf("%d", &x);
	printf("int you entered: %d\n",x);

	printf("Enter a string: ");
	scanf("%s", s);

	printf("You entered: %s\n",s);

	return 0;
}