char findTheDifference(char* s, char* t)
{
	char difference = 0;
	while ((*s) != '\0') {
		difference = difference ^ (*s) ^ (*t);
		s++;
		t++;
	}

	difference = difference ^ (*t);

	return difference;
}
