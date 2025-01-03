include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
int max_num(const v<int>& arr) {
  return *max_element(arr.begin(), arr.end());
}

int min_num(const v<int>& arr) {
  return *min_element(arr.begin(), arr.end());
}

bool is_prime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int count_primes(const v<int>& arr) {
  int count = 0;
  for (int num : arr) {
    if (is_prime(num)) count++;
  }
  return count;
}

bool is_palindrome(int n) {
  string s = to_string(n);
  string rs = s;
  reverse(rs.begin(), rs.end());
  return s == rs;
}

int count_palindrom(const vector<int>& arr) {
  int count = 0;
  for (int num : arr) {
    if (is_palindro(num)) count++;
  }
  return count;
}

int count_divisors(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      count += (i * i == n) ? 1 : 2;
    }
  }
  return count;
}

int max_divisors_num(const vector<int>& arr) {
  int max_div = 0;
  int max_num = 0;
  for (int num : arr) {
    int div_count = count_divisors(num);
    if (div_count > max_div) {
      max_div = div_count;
      max_num = num;
    } else if (div_count == max_div) {
      max_num = max(max_num, num);
    }
  }
  return max_num;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  cout << "The maximum number : " << max_num(arr) << endl;
  cout << "The minimum number : " << min_num(arr) << endl;
  cout << "The number of prime numbers : " << count_primes(arr) << endl;
  cout << "The number of palindrome numbers : " << count_palindromes(arr) << endl;
  cout << "The number that has the maximum number of divisors : " << max_divisors_num(arr) << endl;

  return 0;
}