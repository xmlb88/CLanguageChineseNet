#include <stdio.h>

//����ṹ��student
struct Student {
	//�ṹ������ĳ�Ա����
	char* name;
	int age;
	float score;
};

void display(struct Student stu) {
	printf("%s�������� %d���ɼ��� %.2f\n", stu.name, stu.age, stu.score);
}

int main() {
	struct Student stu1;
	//Ϊ�ṹ��ĳ�Ա������ֵ
	char a[] = "С��";
	stu1.name = a;
	stu1.age = 15;
	stu1.score = 92.5;

	//���ú���
	display(stu1);

	return 0;
}