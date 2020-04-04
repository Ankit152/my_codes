import random

def level():
    k=0
    print("\n1. EASY\n2. MEDIUM\n3. HARD\nEnter the coice: ")
    k=int(input())
    if(k==1):
        easy()
    elif(k==2):
        medium()
    else:
        hard()

def easy():
    score=0
    print("\n==========QUIZ START==========")
    a=random.randrange(1,20)
    b=random.randrange(1,20)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=50
    a=random.randrange(1,20)
    b=random.randrange(1,20)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=50
    a=random.randrange(1,20)
    b=random.randrange(1,20)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=50
    a=random.randrange(1,20)
    b=random.randrange(1,20)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=50
    a=random.randrange(1,20)
    b=random.randrange(1,20)
    print('\n',a,' * ',b,' = ')
    ans=int(input())
    if(ans==int(a*b)):
        score+=50
        

    if(score==250):
        print('\nAll correct!!!')
    else:
        print('\nYou missed :(',score)
    
def medium():
    score=0
    print("\n==========QUIZ START==========")
    a=random.randrange(20,40)
    b=random.randrange(20,40)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=100
    a=random.randrange(20,40)
    b=random.randrange(20,40)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=100
    a=random.randrange(20,40)
    b=random.randrange(20,40)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=100
    a=random.randrange(20,40)
    b=random.randrange(20,40)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=100
    a=random.randrange(20,40)
    b=random.randrange(20,40)
    print('\n',a,' * ',b,' = ')
    ans=int(input())
    if(ans==int(a*b)):
        score+=100
        

    if(score==500):
        print('\nAll correct!!!')
    else:
        print('\nYou missed :(',score)
    
    
def hard():
    score=0
    print("\n==========QUIZ START==========")
    a=random.randrange(40,60)
    b=random.randrange(40,60)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=200
    a=random.randrange(40,60)
    b=random.randrange(40,60)
    print('\n',a,' + ',b,' = ')
    ans=int(input())
    if(ans==int(a+b)):
        score+=200
    a=random.randrange(40,60)
    b=random.randrange(40,60)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=200
    a=random.randrange(40,60)
    b=random.randrange(40,60)
    print('\n',a,' - ',b,' = ')
    ans=int(input())
    if(ans==int(a-b)):
        score+=200
    a=random.randrange(40,60)
    b=random.randrange(40,60)
    print('\n',a,' * ',b,' = ')
    ans=int(input())
    if(ans==int(a*b)):
        score+=200
    
    if(score==1000):
        print('\nAll correct!!!')
    else:
        print('\nYou missed :(',score)
    
    
def rules():
	print('''\n==========RULES==========
1. There are 3 levels. Each level consists of 5 random questions. To answer, you must type the answer.
2. Each question consists of 50,100 or 200 points depending upon the level you are playing. There's no negative point for wrong answers.''')

def about():
	print('''\n==========ABOUT==========
This project has been created by Ankit Kurmi.
It is a basic Python Project for my hobby.''')

if __name__ == "__main__":
	choice = 1
	while choice != 3:
		print('\n=========WELCOME TO QUIZ MASTER==========')
		print('-----------------------------------------')
		print('1. PLAY QUIZ')
		print('2. SEE INSTRUCTIONS ON HOW TO PLAY THE GAME')
		print('3. EXIT')
		print('4. ABOUT')
		choice = int(input('ENTER YOUR CHOICE: '))
		if choice == 1:
			level()
		elif choice == 2:
			rules()
		elif choice == 3:
			break
		elif choice == 4:
			about()
		else:
			print('WRONG INPUT. ENTER THE CHOICE AGAIN')

