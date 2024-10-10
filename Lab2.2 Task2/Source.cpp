#include <iostream>
#include <string>

enum Names { David, Tom, Andrew, Kate, Mary, Olga, Arthur };

struct Student
{
	Names name;
	int course;
	char gender;
};

int main() {
	Student myStudent[7]{
		{ David, 3, 'M' },
		{ Tom, 4, 'M' },
		{ Andrew, 1, 'M' },
		{ Kate, 2, 'F' },
		{ Mary, 1, 'F' },
		{ Olga, 3, 'F' },
		{ Arthur, 2, 'M' }
	};
	float size = sizeof(myStudent) / sizeof(Student);
	int counter = 0;
	float percent = 0.0;
	for (int i = 0; i < 7; i++) {
		if (myStudent[i].course == 1 && myStudent[i].gender == 'M') {
			counter++;
		}
	}
	percent = (counter / size);
	std::cout << percent << "%";
	return 0;
}