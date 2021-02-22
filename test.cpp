#include<map>
#include<vector>
#include<iostream>
using namespace std;
//�����ڼ�С��ʹ��΢���յ��ܶ��������ǳ����ġ��ڲ鿴��ȡ�����¼ʱ���֣�
//ĳ����������ֵĴ��������˺��������һ�롣
//���С���ҵ��ú����д�������㷨˼·�ʹ���ʵ�֣�Ҫ���㷨�����ܸ�Ч��
//����һ������Ľ������gifts�����Ĵ�Сn���뷵���������Ľ�
int getValue(vector<int> gifts, int n){
	if (gifts.empty())
		return 0;
	map<int, int>num_count;
	for (int i = 0; i < n; i++){
		num_count[gifts[i]]++;
	}
	map<int, int>::iterator it = num_count.begin();
	while (it != num_count.end()){
		if (it->second>n / 2){
			return it->first;
		}
		it++;
	}
	return 0;
}