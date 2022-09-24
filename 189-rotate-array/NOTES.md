k %= nums.length; makes sure that k is less than the length of the array.
There are two parts of the array that we need to care about:
​
Goal1: Assume range1 = [0, n - k - 1]. Members of this range only need to move to the right by k steps. For any member i in this range, the targeted position is i + k. In other words, we need to move every member i in range1 to position i + k
Goal2: Assume range2 = [n - k, n - 1]. Members of this range will have to move beyond the boundary of the array, thus for any member i in this range, the targeted position is (i + k) % n , which is equivalent to i + k - n. In other words, we need to move every member i in range2 to position i + k - n.
​
For any member i, after the first reverse(...) call, its new position j will be n - i - 1.
​
By replacing the i in n - i - 1, we can calculate the new value of range1 from [0, n - k - 1] to [n - (n - k - 1) - 1, n - 1], which is [k, n - 1] (as range1 is reversed, its left and right bounds also need to be reversed).
The similar procedure can be applied to range2, the new range2 now becomes [0, k - 1]
​
For any member j in the new range2, the second reverse(...) call will assign the member j to a new position k - 1 - j. Notice that, this j is actually equal to n - i - 1, where i is the original position. So, the new position now becomes k - 1 - (n - i - 1) = k - n + i, which meets Goal2.