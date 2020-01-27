# HackerRank-Practice
QUES 1:
Counting Pairs
Two pairs of integers (a, b) and (c, d) are considered distinct if at least one element of (a, b) ? (c, d). For example given a list (1, 2, 2, 3), (1, 2) is distinct from (1, 3) and (2, 3). A pair is ordered such that a = b.

 

Given an integer k and a list of integers, count the number of distinct valid pairs of integers (a, b) in the list for which a + k = b.

 

For example, the array [1, 1, 1, 2] has two different valid pairs: (1, 1) and (1, 2). If k = 1, then this means we have a total of 1 valid pair which satisfies a + k = b ? 1 + 1 = 2, the pair (a, b) = (1, 2).

 

Function Description 

Complete the function countPairs in the editor below. The function must return an integer that denotes the number of valid (a, b) pairs in the numbers array that have a difference of k.

 

countPairs has the following parameter(s):

    numbers[numbers[0],...numbers[n-1]]:  an array of integers

    k: an integer

 

Constraints

2 = n = 2 × 105
0 = numbers[i] = 109, where 0 = i < n
0 = k = 109
 

Input Format for Custom Testing
Sample Case 0
Sample Input 0

6
1
1
2
2
3
3
1
Sample Output 0

2
Explanation 0

There two valid pairs in numbers = [1, 1, 2, 2, 3, 3] for k = 1, a + 1 = b:

(1, 2)
(2, 3)
Sample Case 1
Sample Input 1

6
1
2
3
4
5
6
2
Sample Output 1

4
Explanation 1

There are four valid pairs in [1, 2, 3, 4, 5, 6] for k = 2, a + 2 = b.:

(1, 3)
(2, 4)
(3, 5)
(4, 6)
Sample Case 2
Sample Input 2

6
1
2
5
6
9
10
2
Sample Output 2

0
Explanation 2

No valid (a, b) pair exists in [1, 2, 5, 6, 9, 10] for k = 2, a + 2 = b, so the function returns 0.





QUES 2:

Psychometric Testing
Psychometric testing is designed to find job-relevant information about an applicant that the traditional interview process would not uncover. It typically includes a combination of online aptitude and personality tests that measure cognitive ability and personality traits.

 

A company has psychometric scores for n candidates, and it will only extend job offers to candidates with scores in the inclusive range given by [lowerLimit, upperLimit]. Given the list of scores and a sequence of score ranges, determine how many candidates the company will extend offers to for each range of scores. For example, if the scores are scores = [1,2,2,3,4] and the limits are 2 and 4, there are 4 candidates, i.e. those with scores [2,2,3,4] that match the conditions.

 

Function Description
Complete the jobOffers function in the editor below. The function must return an array of q integers where the value at each index i denotes the number of candidates in the inclusive range [lowerLimits[i], upperLimits[]] that the company will extend offers to.

 

jobOffers has the following parameter(s):

    scores[scores[0],...scores[n-1]]:  an array of integers

    lowerLimit[lowerLimit[0],...lowerLimit[q-1]]:  an array of integers

    upperLimit[upperLimit[0],...upperLimit[q-1]]:  an array of integers

 

Constraints

1 = n = 105
1 = scores[j] = 109
1 = q = 105
1 = lowerLimits[i] = upperLimits[i] = 109
 

Input Format For Custom Testing
Input from stdin will be processed as follows and passed to the function.

 

The first line contains an integer, n, that denotes the number of elements in scores.

Each line j of the n subsequent lines (where 0 = j < n) contains an integer that describes scores[j].

The next line contains an integer, q, that denotes the number of elements in lowerLimits.

Each line i of the q subsequent lines (where 0 = i < q) contains an integer that describes lowerLimits[i].

The next line contains an integer, q, that denotes the number of elements in lowerLimits.

Each line i of the q subsequent lines (where 0 = i < q) contains an integer that describes upperLimits[i].

Sample Case 0
Sample Input For Custom Testing

Sample Input 0

5
1
3
5
6
8
1
2
1
6
 

Sample Output 0

3
 

Explanation 0

Given scores = [1, 3, 5, 6, 8], lowerLimits = [2], and upperLimits = [6], perform the following q = 1 query:

 

Find all the scores in the inclusive range [2, 6]. There are three such candidates (i.e., scores 3, 5, and 6), so store 3 in index 0 of the return array.
 

The function then returns the array [3].

 

Sample Case 1
Sample Input For Custom Testing

Sample Input 1

3
4        
8
7
2
2
4
2
8
4
Sample Output 1

3
1
 

Explanation 1

Given scores = [4, 8, 7], lowerLimits = [2, 4], and upperLimits = [8, 4], perform the following q = 2 queries:

 

Find all the scores in the inclusive range [2, 8]: there are three such candidates (i.e., scores 4, 7, and 8), so store 3 in index 0 of the return array.
Find all the scores in the inclusive range [4, 4]: there is one such candidate (i.e., score 4), so store 1 in index 1 of the return array.
 

The function then returns the array [3, 1].




QUES 3:

Football Scores
The number of goals achieved by two football teams in matches in a league is given in the form of two lists. Consider:

Football team A, has played three matches, and has scored teamA = [1, 2, 3] goals in each match respectively.
Football team B, has played two matches, and has scored teamB = [2, 4] goals in each match respectively.
For each match of team B, compute the total number of matches of team A where team A has scored less than or equal to the number of goals scored by team B in that match.

 

In the above case:

For 2 goals scored by team B in its first match, team A has 2 matches with scores 1 and 2.
For 4 goals scored by team B in its second match, team A has 3 matches with scores 1, 2 and 3.
Hence, the answer: [2, 3]. 

 

Function Description 

 

Complete the function counts in the editor below. The function must return an array of m positive integers, one for each teamB[i] representing the total number of elements teamA[j] satisfying teamA[j] = teamB[i] where 0 = j < n and 0 = i < m, in the given order.

 

counts has the following parameter(s):

    teamA[teamA[0],...teamA[n-1]]:  first array of positive integers

    teamB[teamB[0],...teamB[n-1]]:  second array of positive integers

 

Constraints

2 = n, m = 105
1 = teamA[j] = 109, where 0 = j < n.
1 = teamB[i] = 109, where 0 = i < m.
 

Input Format For Custom Testing
Input from stdin will be processed as follows and passed to the function.

 

The first line contains an integer n, the number of elements in teamA.

The next n lines each contain an integer describing teamA[j] where 0 = j < n.

The next line contains an integer m, the number of elements in teamB.

The next m lines each contain an integer describing teamB[i] where 0 = i < m.

 

Sample Case 0
Sample Input 0

4
1
4
2
4
2
3
5
Sample Output 0

2
4
Explanation 0

Given values are n = 4, teamA = [1, 4, 2, 4], m = 2, and teamB = [3, 5].

For teamB[0] = 3, we have 2 elements in teamA (teamA[0] = 1 and teamA[2] = 2) that are = teamB[0].
For teamB[1] = 5, we have 4 elements in teamA (teamA[0] = 1, teamA[1] = 4, teamA[2] = 2, and teamA[3] = 4) that are = teamB[1].
Thus, the function returns the array [2, 4] as the answer.

Sample Case 1
Sample Input 1

5
2
10
5
4
8
4
3
1
7
8
Sample Output 1

1
0
3
4
Explanation 1

Given values are n = 5, teamA = [2, 10, 5, 4, 8], m = 4, and teamB = [3, 1, 7, 8].

For teamB[0] = 3, we have 1 element in teamA (teamA[0] = 2) that is = teamB[0].
For teamB[1] = 1, there are 0 elements in teamA that are = teamB[1].
For teamB[2] = 7, we have 3 elements in teamA (teamA[0] = 2, teamA[2] = 5, and teamA[3] = 4) that are = teamB[2].
For teamB[3] = 8, we have 4 elements in teamA (teamA[0] = 2, teamA[2] = 5, teamA[3] = 4, and teamA[4] = 8) that are = teamB[3].
Thus, the function returns the array [1, 0, 3, 4] as the answer.



QUES 4:


Maximum Difference in an Array
Given an array of integers, compute the maximum difference between any item and any lower indexed smaller item for all the possible pairs.  In other words, for the array arr, find the maximum value of arr[j] - arr[i] for all i, j where 0 = i < j < n and arr[i] < arr[j]. If no item has a smaller item with a lower index, then return -1.

 

For example, given arr = [1, 2, 6, 4], first compare 2 to the elements to its left. 1 is smaller, so calculate the difference 2 - 1 = 1. 6 is bigger than 2 and 1, so calculate the differences 6 - 2 = 4 and 6 - 1 = 5. The last element, 4, is only bigger than 2 and 1, and the differences are 4 - 2 = 2 and 4 - 1 = 3. The largest difference is 6 - 1 = 5.

 

Function Description 

Complete the function maxDifference in the editor below. The function must return an integer that represents the maximum difference in arr.

 

maxDifference has the following parameter(s):

    arr[arr[0],arr[1],...arr[n-1]]:  an array of integers

 

Constraints

1 = n = 2 × 105
-106 = arr[i] = 106 ? i ? [0, n - 1]
 

Input Format For Custom Testing
Input from stdin will be processed as follows and passed to the function:

 

The first line contains a single integer, n, the number of elements in the array arr.

Each of the n subsequent lines contains a single integer, each an element arr[i] where 0 = i < n.

Sample Case 0
Sample Input 0

7
2
3
10
2
4
8
1
Sample Output

8
Explanation

n = 7, arr = [2, 3, 10, 2, 4, 8, 1]

Differences are calculated as:

3 - [2] = [1]
10 - [3, 2] = [7, 8]
4 - [2, 3, 2] = [2, 1, 2]
8 - [4, 2, 3, 2] = [4, 6, 5, 6]
The maximum is found at 10 - 2 = 8.

Sample Case 1
Sample Input 1

6
7
9
5
6
3
2
Sample Output

2
Explanation

n = 6, arr = [7, 9, 5, 6, 3, 2]

Differences are calculated as:

9 - [7] = 2
6 - [5] = 1
The maximum difference is 2.


QUES 5:


List Max
In this challenge, start with an array initialized to zeros with indices starting at 1 and a series of operations to perform on segments of the list.  Each operation will consist of a starting and ending index within the array, and a number to add to each element within that range. Determine the maximum value in the final array.

 

For example, start with an array of 5 elements: list = [0, 0, 0, 0, 0].  The variables a and b represent the starting and ending indices, inclusive.  Another variable, k, is the addend.  The first element is at index 1.

    a    b    k             list
                   [  0,  0,  0,  0,  0]
    1    2   10    [ 10, 10,  0,  0,  0]
    2    4    5    [ 10, 15,  5,  5,  0]
    3    5   12    [ 10, 15, 17, 17, 12]
 

The maximum value in the resultant array is 17. That is the value to be determined.

 

Function description 

 

Complete the listMax function in the editor below. The function must return a long integer that denotes the largest value in the array after all operations have been performed.

 

listMax has the following parameters:

    n: an integer, the size of the initial array.

    operations: a 2D integer array where each element contains an operation.

 

Constraints

3 = n = 107
1 = o = 2 × 105
1 = a = b = n
0 = k = 109
 

Input Format 
Input from stdin should be processed as follows and passed to the function.

 

The first line contains an integer, n, the size of your array

The second line contains an integer, o, the number of operations

The next line contains the integer 3, the number of elements used to define each operation

o lines follow, each containing 3 space-separated integers, a, b, and k: the starting index, ending index and value to add

Sample Case 0
Sample Input 0

5
3
3
1 2 100
2 5 100
3 4 100
 

Sample Output 0

200
 

Explanation 0

Perform the following sequence of o = 3 operations on list = [0, 0, 0, 0, 0]:

Add k = 100 to every element in the inclusive range [1, 2], resulting in list = [100, 100, 0, 0, 0].
Add k = 100 to every element in the inclusive range [2, 5], resulting in list = [100, 200, 100, 100, 100].
Add k = 100 to every element in the inclusive range [3, 4], resulting in list = [100, 200, 200, 200, 100].
Return the maximum value in the final list, 200, as the answer.

Sample Case 1
Sample Input 1

4
3
3
2 3 603
1 1 286
4 4 882
 

Sample Output 1

882
 

Explanation 1

Perform the following sequence of o = 3 operations on list = [0, 0, 0, 0]:

Add k = 603 to every element in the inclusive range [2, 3], resulting in list = [0, 603, 603, 0].
Add k = 286 to every element in the inclusive range [1, 1], resulting in list = [286, 603, 603, 0].
Add k = 882 to every element in the inclusive range [4, 4], resulting in list = [286, 603, 603, 882].
Return the maximum value in the final list, 882, as the answer.


QUES 6:


Delete Nodes Greater Than X
Given a singly-linked list and a maximum value, remove any values from the list that are greater than the given maximum while maintaining list order.

 

For example, the list of integers [100, 105, 50] and a maximum value of 100, remove 105 from the list since it is larger than the maximum allowed value. Return a reference to the root node of the list, the element valued 100 in this case.

 

Function Description 

Complete the function removeNodes in the editor below. The function must return a reference to the root node of the final list.

 

removeNodes has the following parameter(s):

    listHead:  a reference to the root node of the singly-linked list

    x:  integer, the maximum value to be included in the returned singly-linked list

 

Constraints

1 = n, x = 105
1 = SinglyLinkedListNode values = 105
 

Input Format for Custom Testing
Input from stdin will be processed as follows and passed to the function.

 

The first line contains an integer n, the number of nodes in the linked list.

The next n lines each contain an element to insert into the linked list.

The last line contains x, the maximum value allowable in the linked list.

Sample Case 0
Sample Input 0

5
1
2
3
4
5
3
 

Sample Output 0

1
2
3
 

Explanation 0 

n = 5, x = 3

list = 1 ? 2 ? 3 ? 4 ? 5

After removing the nodes having value > 3, list = 1 ? 2 ? 3.

Sample Case 1
Sample Input 1

5
5
2
1
6
7
5
 

Sample Output 1

5
2
1
 

Explanation 1

n = 5, x = 5

list = 5 ? 2 ? 1 ? 6 ? 7.

After removing the nodes having value > 5, list = 5 ? 2 ? 1.



QUES 7:



Condensed List
Given a list of integers, remove any nodes that have values that have previously occurred in the list and return a reference to the head of the list.

 

For example, the following list has a recurrence of the value 3 initially:

 

PS Example
Remove the node at position 2 in the list above, 0 based indexing.
 

 

Function Description 

Complete the function condense in the editor below. The function must return a reference to a LinkedListNode, the first node of a list that contains only the unique value nodes from the original list, in order.

 

condense has the following parameter(s):

    head:  the head of a singly-linked list of integers, a LinkedListNode

 

Note:. A LinkedListNode has two attributes: val, an integer, and next, a reference to the next item in the list or the language equivalent of null at the tail.

 

Constraints

1 = n = 105
0 = LinkedListNode[i].val = 1000
 

Input Format for Custom Testing
Input from stdin will be processed as follows and passed to the function.

 

The first line contains an integer n, the size of the array list.

Each of the next n lines contains an integer list[i] where 0 = i < n.

Sample Case 0
Sample Input 0

8
3
4
3
2
6
1
2
6
Sample Output 0

3
4
2
6
1
Explanation 0

The list looks like this:

Sample Case Initial
The linked list given as input.
From the diagram, remove:

list[2] = 3
list[6] = 2 
list[7] = 6
After calling condense, the list looks like this:

Sample Case Reduced
The condensed list.



QUES 8:


Braces
 

You are designing a compiler for a C++ program and need to check that braces in any given file are balanced.

 

Braces in a string are considered to be balanced if the following criteria are met:

All braces must be closed. Braces come in pairs of the form (), {} and [].  The left brace opens the pair, and the right one closes it. 
In any set of nested braces, the braces between any pair must be closed. 
 

For example, [{}] is a valid grouping of braces but [{]} is not.

 

Function Description 

Complete the function braces in the editor below. The function must return an array of strings where the string at each index i denotes whether or not the braces were balanced in values[i].  The array should consist of strings YES or NO aligned with their indices in values.

 

braces has the following parameter(s):

    values[values[0],...values[n-1]]:  an array of strings to analyze

 

Constraints

1 = n = 15
1 = | values[i] | = 100
Each values[i] consists of (, ), {, }, [, and ] only.
Input Format For Custom Testing
Input from stdin will be processed as follows and passed to the function:

 

The first line contains an integer n, the number of elements in values.

Each of the next n lines contains a string that describes values[i] where 0 = i < n.

Sample Case 0
 

Sample Input For Custom Testing

2
{}[]()
{[}]}
 

Sample Output

YES
NO
 

Explanation

values[0]: {}[]() meets the criteria for a balanced string, so index 0 in the return array should contain the string YES.

values[1]: {[}]} contains unmatched braces between a matched pair in the substrings [}, {[}, and [}], so index 1 in the return array should contain the string NO.


QUES 9:



Histogram
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.
For example, consider the following histogram with 7 bars of heights {6, 2, 5, 4, 5, 1, 6}. The largest possible rectangle possible is 12 (see the below figure, the max area rectangle is highlighted in red)


Input format

First line contains the number of bars, Second line contains space separated integers that represent the width of the bars.
Output format
maximum area


Input 1
7
6 2 5 4 5 1 6
Output 1
12


Input 2
7
24 3 12 12 32 22 34
Output 2
66

QUES 10:


Street Parade
For sure, the love mobiles will roll again on this summer's street parade. Each year, the organisers decide on a fixed order for the decorated trucks. Experience taught them to keep free a side street to be able to bring the trucks into order. 

The side street is so narrow that no two cars can pass each other. Thus, the love mobile that enters the side street last must necessarily leave the side street first. Because the trucks and the ravers move up closely, a truck cannot drive back and re-enter the side street or the approach street. 

You are given the order in which the love mobiles arrive. Write a program that decides if the love mobiles can be brought into the order that the organisers want them to be.

Input

There are several test cases. The first line of each test case contains a single number n, the number of love mobiles. The second line contains the numbers 1 to n in an arbitrary order. All the numbers are separated by single spaces. These numbers indicate the order in which the trucks arrive in the approach street. No more than 1000 love mobiles participate in the street parade. Input ends with number 0.

Output

For each test case your program has to output a line containing a single word "yes" if the love mobiles can be re-ordered with the help of the side street, and a single word "no" in the opposite case.

Example

Sample input:
5
5 1 2 4 3
0

Sample output:
yes

QUES 11:


Sorting using stack
Using only three stacks (source, sorted and losers), sort a sequence of numbers. numbers are placed on the source stack. Now in sortfun function sort the stacks  in this way:  Assume that the number at top of the source stack is largest and push it on the sorted stack. Continue to pop the source stack comparing it with the top of the sorted stack, whichever number is smallest pop it from its stack and push it onto the losers stack. Once the source stack is empty, repeat the process using the loser stack as the source stack and use the source stack as the losers stack. The algorithm completes when all the numbers have been placed in sorted stack.

 

Input:

5

60

4

9

8

2

Output:

2

4

8

9

60

Explanation:

Input: first number is size of array. next each line  contains  elements.(unsorted elements)

Output: sorted elements

 

QUES 12:


A stack takes the elements as input and processes them so as to give the output as twice of the element entered into the stack but with last element entered popped. This operation woks for both integer and float values entered into the stack.

SAMPLE INPUT

12

34

45

65

33

SAMPLE OUTPUT

24  68  90  130  

SAMPLE INPUT

12.1

34.1

45.1

65.1

33.1

SAMPLE OUTPUT

24.2  68.2  90.2  130.2  


QUES 13:


Build the code which takes two key values key1 and key2 in a linked list and swaps pointers to node with key1 and key2.

SAMPLE INPUT                                                   

No. Nodes= 5                                                       

 

78                                                       

22

43

48

98

 

key1=78

key2=98

 

SAMPLE OUTPUT

78 22 43 48 98

98 22 43 48 78


QUES 14:


Sorted insert for circular linked list
Write a C function to insert a new value in a sorted Circular Linked List (CLL). For example, if the input CLL is following.

2->5->8->10

After inserting 7 circular linked list will be

2->5->7->8->10



QUES 15:

Palindrome in a linked list
Given a linked list find if it is a valid palindrome or not. 

 

1->2->1  is a valid palindrome while 1->2->2 is not


QUES 16:


Merged List in Reverse Order
Given two linked lists sorted in increasing order. Merge them such a way that the result list is in decreasing order.  Two linked lists are each of length three i.e each linked list consists of three(3) nodes and the merged list consists of 6 nodes.

 

Sample Input:

15 20 25    // List A

6 8 10        // List B

Sample Output: 

25 20 15 10 8 6 // Merged List in reverse order
