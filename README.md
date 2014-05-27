#Magic Rankings .
---

* Now I don't remember what is the number of this PS of from the site CodeChef.com .
* This was a good problem basically for the beginners .
* And also at the first I was stuck ,and then after a little scratching my head I got it finally.
* It took me a quite a lot of time to think on it .
* And after many unsuccessful attempts I got it .
* This has around 150 submissions .
* And yes,Even I am undergoing a learning procedure .
* So,suggestions are most welcome .
* Email me @ kaushikpeace@gmail.com .


***
###The Problem Statement is as follows :
***
Our chef has recently opened a new restaurant with a unique style. The restaurant is divided into K compartments (numbered from 1 to K) and each compartment can be occupied by at most one customer.
Each customer that visits the restaurant has a strongly preferred compartment p (1 ≤ p ≤ K), and if that compartment is already occupied, then the customer simply leaves. Now obviously, the chef wants to maximize the total number of customers that dine at his restaurant and so he allows (or disallows) certain customers so as to achieve this task. You are to help him with this.
Given a list of N customers with their arrival time, departure time and the preferred compartment, you need to calculate the maximum number of customers that can dine at the restaurant.<br>
Input :

The first line contains an integer T denoting the number of test cases. Each of the next T lines contains two integers N and K , the number of customers that plan to visit the chef's restaurant and the number of compartments the restaurant is divided into respectively. Each of the next N lines contains three integers si, fi and pi , the arrival time, departure time and the strongly preferred compartment of the ith customer respectively. 

Note that the ith customer wants to occupy the pith compartment from [si, fi) i.e the ith customer leaves just before fi so that another customer can occupy that compartment from fi onwards.<br>
Output:

For every test case, print in a single line the maximum number of customers that dine at the restaurant.<br>
Constraints

1 ≤ T ≤ 30<br>
0 ≤ N ≤ 105<br>
1 ≤ K ≤ 109<br>
0 ≤ si < fi ≤ 109<br>
1 ≤ pi ≤ K<br>
Example

<b>Input:</b>
2<br>
3 3<br>
1 3 1<br>
4 6 2<br>
7 10 3<br>
4 2<br>
10 100 1<br>
100 200 2<br>
150 500 2<br>
200 300 2

<b>Output:</b><br>
3<br>
3
---


