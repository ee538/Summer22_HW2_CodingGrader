from __future__ import print_function
import re

total_coding_score = 0.0;
f = open("grades/TestsCoding.txt", "r")

for line in f:
	q_num, pass_num = re.findall(r'\d+', line)
	q_num = int(q_num)
	pass_num = int(pass_num)

	if q_num == 1:
		q1_score = pass_num * 5
		print("Q1:", pass_num, "/", 2, "passed | score:", q1_score)
		total_coding_score += q1_score
	elif q_num == 2:
		q2_score = pass_num * 1
		print("Q2:", pass_num, "/", 25, "passed | score:", q2_score)
		total_coding_score += q2_score
	elif q_num == 3:
		q3_score = pass_num * 20
		print("Q3:", pass_num, "/", 1, "passed | score:", q3_score)
		total_coding_score += q3_score
	elif q_num == 4:
		q4_score = pass_num * 2.5
		print("Q4:", pass_num, "/", 4, "passed | score:", q4_score)
		total_coding_score += q4_score
	elif q_num == 5:
		if pass_num <= 6:
			q5_score = pass_num * 2.5
		elif pass_num == 7:
			q5_score = 20
		print("Q5:", pass_num, "/", 7, "passed | score:", q5_score)
		total_coding_score += q5_score
	elif q_num == 7:
		q7_score = pass_num * 2.5
		print("Q7:", pass_num, "/", 4, "passed | score:", q7_score)
		total_coding_score += q7_score
	elif q_num == 8:
		q8_score = pass_num * 1.875
		print("Q8:", pass_num, "/", 8, "passed | score:", q8_score)
		total_coding_score += q8_score
	else:
		raise ValueError('Wrong question number')


print("-----------------------------------------")
print("Your total score of coding section:", total_coding_score)
print("-----------------------------------------")
	

	
	

