���߲���Accepted���������Ŀ

��ĿĿ¼����
AcceptedCode
	|	 	
	|- LeetCode		//��OJƽ̨����������
	|	|- main.cpp
	|	|- 1.h   	//�ļ������������
	|	|- 2.h
	|	|- ����
	|
	|- NowCoder
	|	|- main.cpp
	|	|- 1.h
	|	|- 2.h
`	|	|����
	|
	|- ����


��Ŀ��ӹ���
1������µ�OJƽ̨����:
	������Ӧƽ̨�����ļ��У�������OJƽ̨���Լ��ύ�ĸ���Accepted��������ļ����£�
	eg. LeetCode OJ ƽ̨ ���� �򴴽���ΪLeetCode���ļ������ڷŴ��룻

2�������Ŀ����:
	�Զ�ӦOJƽ̨�µ���Ŀ���Ϊ�ļ�����дͷ�ļ���������ص����д�����ڸ�ͷ�ļ��У�
	eg. LeetCode OJ ƽ̨��һ�� ���� �򴴽���Ϊ 1.h ��ͷ�ļ���

3����дSolution����:
        ��1�����Լ������ֶ���namespace����namespace�б�д��Ӧ��Solution�࣬����Solution�������Ŀ��ţ�
	 eg. Chirl��дLeetCode OJ ƽ̨��һ�� ���� 
	    namespace Chirl
	    {
		class Solution_1
		{
			//�㷨����
			����
		}
	    }	
	     
4�����ڲ��Դ��룺
	Ҳ�����Լ������ֿռ�����У��Ծ�̬������ʽ���ڣ�������Ϊ test����
	eg. 
	    namespace Chirl
	    {
		class Solution_1
		{
			//�㷨����
			����

			static void test(){//���Դ��롭��}
		}
	    }	

5��main�е��ö�Ӧ���㷨��
	#include��Ӧ��ŵ�ͷ�ļ�����������Ҫ���õ��㷨��test����;
	eg. ����Chirl�ĵ�һ���㷨��
	//main.cpp��
	  #include "1.h"
	  int main(int argc, char **argv)
	  {
		Chirl::Solution_1::test();
		return 0;	
	  }	

