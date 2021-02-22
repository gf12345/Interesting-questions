#include<iostream>
#include<vector>
#include<map>
using namespace std;
//春节期间小明使用微信收到很多个红包，非常开心。在查看领取红包记录时发现，
//某个红包金额出现的次数超过了红包总数的一半。
//请帮小明找到该红包金额。写出具体算法思路和代码实现，要求算法尽可能高效。
//给定一个红包的金额数组gifts及它的大小n，请返回所求红包的金额。
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