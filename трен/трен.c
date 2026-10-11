#include <stdio.h>
#include <stdbool.h>

int main() {
	int nums[4] = { 2,7,11,15 };
	int target = 9;
	int s = 1;
	int sp[2];
	bool f = false;
	for (int i = 0; i < 4; i++) {
		for (s = i + 1; s < 4; s++) {
			if (nums[i] + nums[s] == target) {
				f = true;
				sp[0] = i;
				sp[1] = s;
				break;
			}
		}
		if (f) {
			break;
		}
	}
	if (f) {
		printf("Indices found: %d, %d\n", sp[0], sp[1]);
	}
	else {
		printf("No indices found that sum to the target.\n");
	}
}