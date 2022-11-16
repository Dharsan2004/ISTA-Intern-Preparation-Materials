#include<bits/stdc++.h>
#define int long long int
#define endl '\n'
using namespace std;
// DharsanS2004

//  Exercise 1 - BASIC QUESTIONS Solutions in C++


// Q1: Get the three sides of a triangle and check if it is equilateral, isosceles or scalene

void findTriangle(int a, int b, int c) {
	if (a == b && b == c) {
		cout << "The Given Triangle is equilateral" << endl;
	}
	else if (a == b || b == c || c == a) {
		cout << "The given Triangle is isosceles" << endl;
	}
	else
		cout << "The given Triangle is Scalene" << endl;
}

// Q2 :Get the month and year and print the number of days in that month
void printNumberOfDays(int N) {

	// Check for 31 Days
	if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12) {
		cout << ("31 Days.");
	}

	// Check for 30 Days
	else if (N == 4 || N == 6 || N == 9 || N == 11) {
		cout << ("30 Days.");
	}

	// Check for 28/29 Days
	else if (N == 2) {
		cout << ("28/29 Days.");
	}

	// Else Invalid Input
	else {
		cout << ("Invalid Month.");
	}
}


// Q3 : Reverse of a number

void reverseNumber(int n) {
	int reversed_number = 0;
	while (n > 0) {
		reversed_number *= 10;
		reversed_number += n % 10;
		n /= 10;
	}
	cout << reversed_number << endl;
}

// Q4 : Series GP

long long binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

int Nth_term(int a, int r, int n) {
	const int mod = 1e9 + 7;
	return a * binpow(r, n - 1, mod) % mod;
}

// Q5 :reverse a string and check if its palidrome

void Q5Ans(string str) {
	string temp = str;
	int i = 0, j = temp.size() - 1;
	while (i <= j) {
		swap(str[i++], str[j--]);
	}
	if (str == temp) {
		cout << "the string is palidrome" << endl;
	}
	else
		cout << "NO its not palidrome" << endl;
}


// Q6 : Find if a number is an armstrong number


class Solution {
public:
	string armstrongNumber(int n) {

		int ans = pow(n % 10, 3) + pow((n / 10) % 10, 3) + pow((n / 100) % 1000, 3);

		if (n == ans)
		{
			return "Yes";
		}
		return "No";
	}
};

// Q7 : Search an element in an array

int search(int arr[], int N, int X)
{
	for (int i = 0; i < N; i++) {
		if (arr[i] == X)
			return i;
	}
	return -1;

}

// Q8 : Print n fibonacci terms using iteration and recursion

// iteration

void fib(int n) {
	int dp[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << endl;

	// space optimized

	int prev2 = 0;
	int prev = 1;

	for (int i = 2; i <= n; i++) {
		int cur_i = prev2 + prev;
		prev2 = prev;
		prev = cur_i;
	}
	cout << prev << endl;

}
// recursion

int fib2(int n) {
	if (n <= 1)
		return n;
	return fib2(n - 1) + fib2(n - 2);
}


// Q9 : Given a string, count the number of alphabets in it

int Count(string S) {
	int cnt = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] >= 'a' and S[i] <= 'z' or S[i] >= 'A' and S[i] <= 'Z')
			cnt++;
	}
	return cnt;
}

// Q10 : Check if two strings are anagrams

bool isAnagram(string a, string b) {

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return a == b;
}

// Q11 : Reverse an array

void reverseArray(int arr[], int n) {
	int i = 0, j = n - 1;
	while (i <= j) {
		swap(arr[i++], arr[j--]);
	}
}

// Q12:Given an array, find the second largest number
int print2largest(int arr[], int n) {
	int lar = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > lar)
			lar = arr[i];
	}

	int second_lar = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] > second_lar and arr[i] != lar) {
			second_lar = arr[i];
		}
	}
	return second_lar;

}

// Q13: Single Number

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		int val = 0;
		for (int i : nums)
			val ^= i;
		return val;

	}
};

// Q14 : Maximize money
class Solution {

public:

	int maximizeMoney(int N , int K) {

		int ans = (N + 1) / 2;

		int solu = ans * K;

		return solu;

	}

};


// Q15 : Check if the given elements are in the given range
bool check_elements(int arr[], int n, int A, int B) {
	// Your code goes here
	unordered_map <int, int> mp;

	for (int i = 0; i < n; i++)
		mp[arr[i]]++;


	while (A <= B)
	{
		if (mp.find(A) != mp.end())
		{
			A++;
		}
		else
		{
			return false;
		}
	}

	return true;
}

// Q16 : Total Fine

long long int totalFine(int n, int date, int car[], int fine[]) {
	long long fineSum = 0;

	if (date % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (car[i] % 2 != 0)
				fineSum += fine[i];
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (car[i] % 2 == 0)
				fineSum += fine[i];
		}
	}

	return fineSum;
}




// Q17 :Even Odd Sum


class Solution {
public:
	vector<int> EvenOddSum(int N, int arr[]) {
		int i = 0, oddsum = 0, evensum = 0;
		for (i = 0; i < N; i++)
		{
			if (i % 2 == 0)
			{
				evensum += arr[i];
			}
			else
			{
				oddsum += arr[i];
			}
		}
		return {evensum, oddsum};
	}
};

signed main() {


}