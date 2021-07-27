int main()
{
	int a = 2;
	int b = 2;

	// Boolean >>> True or false (1, 0)
	bool hasil1, hasil2;

	// Sebanding ==
	hasil1 = (a == b);
	// tidak sebanding !=
	hasil2 = (a != b);

	// kurang dari
	hasil1 = (a < b);
	// lebih dari
	hasil2 = (a > b);

	// Kurang dari sama dengan 
	hasil1 = (a <= b);
	// Lebih Dari sama dengan
	hasil2 = (a >= b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;	

	cin.get();
	return 0;
}
