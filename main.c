#include <stdio.h>
#include <stdbool.h>

int main() {	
	char nums[] = {'1','2','3','4','5','6','7','8','9'};
	char chrs[] = {'+', '-', '*', '/', '^', '%'};
	int rnums[32];
	while (true) {
		const char* st;
		scanf("%c", st);
		char sym = st[0];
		bool isnum = false;
		bool isch = false;
		bool isspc = false;
		int i = 1;
		while (sym != ';') {
			for (short nari = 0; nari <= 9; nari++) {
				if (sym == nums[nari]) {
					isch = false;
					isspc = false;
					isnum = true;
				}
			}
			for (short cari = 0; cari <= 6; cari++) {
				if (sym == chrs[cari]) {
					isnum = false;
					isspc = false;
					isch = true;
				}
			}
			if (sym == ' ') {
				isch = false;
				isnum = false;
				isspc = true;
			}
			if (isnum) {
				printf("num\n");
			}
			if (isch) {
				printf("char\n");
			}
			if (isspc) {
				printf("space\n");
			}
		}
	}
	return 0;
}