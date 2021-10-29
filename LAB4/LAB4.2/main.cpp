#include"Student.h"
#include"StudentsGroup.h"

int main()
{
	StudentsGroup* studentGroup;
	studentGroup = new StudentsGroup();
	studentGroup->addStudent(new Student());
	studentGroup->addStudent(new Student("John", 10));
	studentGroup->addStudent(new Student("Jimmy", 9));
	studentGroup->displayStudentInGroup();
	return 0;
}