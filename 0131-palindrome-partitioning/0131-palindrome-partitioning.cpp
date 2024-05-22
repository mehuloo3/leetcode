
   class Solution {
  public:
    vector < vector < string >>partition(string s) {
      vector < vector < string > > result;
      vector < string > path;
      partition(0, s, path, result);
      return result;
    }

  void partition(int index, string s, vector < string > & path,
    vector < vector < string > > & result) {
    if (index == s.size()) {
      result.push_back(path);
      return;
    }
    for (int i = index; i < s.size(); ++i) {
      if (isPalindrome(s, index, i)) {
        path.push_back(s.substr(index, i - index + 1));
        partition(i + 1, s, path, result);
        path.pop_back();
      }
    }
  }

  bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }

};