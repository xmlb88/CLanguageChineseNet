#include <stdio.h>

//ͨ��class�ؼ��ֶ�����
class Student {
public:
	//������ı���
	char* name;
	int age;
	float score;

	//������ĺ���
	void display() {
		printf("%s�������� %d���ɼ��� %.2f\n", name, age, score);
	}
};

int main() {
	//ͨ�������������������������
	class Student stu1;
	//Ϊ��ĳ�Ա������ֵ
	char a[] = "С��";
	stu1.name = a;
	stu1.age = 15;
	stu1.score = 92.5f;
	//������ĳ�Ա����
	stu1.display();

	return 0;
}