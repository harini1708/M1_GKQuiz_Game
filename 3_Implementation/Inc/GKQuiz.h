#ifndef _SYSTEM_H
#define _SYSTEM_H
#include<stdio.h>
#include<stdlib.h>
char name[30];
int score_user=0,counth=0;
void calcScore()  //This function is used to calculate the scores in quiz
{
    if (score_user >= 80&&score_user <= 100)
    {
	printf("\nCongrats! %s You have won the quiz.\n",name);
	printf("you got %d numbers.\n",score_user);
	printf("your %d Question is correct.\n",counth);
    }
 else if(score_user >= 60&&score_user < 80)
    {
	printf("Congrats! %s You have won the quiz.\n",name);
	printf("you got %d numbers.\n",score_user);
	printf("your %d Question is correct.\n",counth);
    }
    else if(score_user >= 40&&score_user < 60)
    {
	printf("Congrats! %s You have won the quiz.\n",name);
	printf("you got %d numbers.\n",score_user);
	printf("your %d Question is correct.\n",counth);
    }
    else if(score_user >= 10&&score_user < 40)
    {
	printf("Sorry! %s Unfortunately,You have lost the quiz.\n",name);
	printf("you got %d numbers.\n",score_user);
	printf("your %d Question is correct.\n",counth);
	printf("*******Better luck lext time*********\n");
    }
    exit(0);
}
char result(char option_choose,char correct) // displays the result according to the option chose
{
    char next;
    if (option_choose==correct)
    {
	counth++;
	score_user=score_user+10;
	printf("Your Answer is correct!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }else
    {
	printf("Sorry Your Answer is wrong!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }
}
void questions() // The questions for the quiz are entered
{
    char option_choose,correct;
    printf("1.Q-India's first satellite is named after\n");
    printf("\t(A).Aryabhatta\t(B).Bhaskara II\n");
    printf("\t(C).Bhaskara I\t(D).Albert Einstein\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='a';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("2.Q-India's tallest stone statue of the Jain sage Gomateswara is at\n");
    printf("\t(A).New Delhi\t(B).Mysore, Karnakata\n");
    printf("\t(C).Mandu, Madhya Pradesh\t(D).Sravanabelagola, Karnataka\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='d';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("3.Q-In a normal human body, the total number of red blood cells is\n");
    printf("\t(A).15 trillion\t(B).30 trillion\n");
    printf("\t(C).25 trillion\t(D).10 trillion\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='b';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("4.Q-India participated in Olympics Hockey in\n");
    printf("\t(A).1938\t(B).1918\n");
    printf("\t(C).1948\t(D).1928\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='d';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("5.Q-Hundred year war was fought between\n");
    printf("\t(A).France and England\t(B).Civil war in England\n");
    printf("\t(C).Greek and persian forces\t(D).None of the above\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='a';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("6.Q-India has largest deposits of ___ in the World\n");
    printf("\t(A).Copper\t(B).Gold\n");
    printf("\t(C).Mica\t(D).None of the above\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='c';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("7.Q-INS Agrani (Petty Officers' School) is situated at\n");
    printf("\t(A).Mumbai\t(B).Chennai\n");
    printf("\t(C).Coimbatore\t(D).Delhi\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='c';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("8.Q-India became a member of the United Nations in\n");
    printf("\t(A).1947\t(B).1945\n");
    printf("\t(C).1950\t(D).1952\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='b';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("9.Q-India's first indigenously built submarine was\n");
    printf("\t(A).INS Savitri\t(B).INS Delhi\n");
    printf("\t(C).INS Shalki\t(D).INS Vibhuti\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='c';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("10.Q-India's first Atomic Reactor was\n");
    printf("\t(A).Kamini\t(B).Dhruva\n");
    printf("\t(C).Zerlina\t(D).Apsara\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&option_choose);
    correct='d';
    correct=result(option_choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    calcScore();
}
void menu() // Rules of the GKQuiz Game are displayed and name is entered by the quiz taker
{
    char ch;
    printf("\nHello! %s\n",name);
    printf("Here are the rules of the Quiz Game.\n");
    printf("1. You have to choose the correct option.\n");
    printf("2. You have to answer 10 question\n");
    printf("3. Every question Carries 10 points\n");
    printf("4.Total Points are 100\n");
    printf("5. ALL THE BEST!!\n");
    printf("Press (Y) for start quiz otherwise press (N)\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
	questions();
	calcScore();
    }else
    {
	exit(0);
    }
}
#endif