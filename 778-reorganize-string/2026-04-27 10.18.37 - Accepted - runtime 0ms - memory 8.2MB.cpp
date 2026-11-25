class Solution {
public:
    string reorganizeString(string s) {
	vector<int> cnt(26);
	int mostfreq = 0, i = 0;

	for(auto it   : s)
		if(++cnt[it - 'a'] > cnt[mostfreq])
			mostfreq = (it - 'a');

	if(2 * cnt[mostfreq] - 1 > s.size()) return "";

	while(cnt[mostfreq]) {
		s[i] = ('a' + mostfreq);
		i += 2;
		cnt[mostfreq]--;
	}

	for(int j = 0; j < 26; j++) {
		while(cnt[j]) {
			if(i >= s.size()) i = 1;
			s[i] = ('a' + j);
			cnt[j]--;
			i += 2;
		}
	}

	return s;

    }
};