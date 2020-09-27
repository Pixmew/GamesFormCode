import random
import sys
import os


class player:
    def Choice(bot=False,god=False):
        retry = True
        while retry is True:
            if bot is True or god is True:
                choice = random.choice([1,2,3])
            else:
                print("Rock --> 1")
                print("paper --> 2")
                print("Scissor --> 3")
                try:
                    choice = int(input())
                except:
                    print("Please Enter correct Value for prop")
                    continue
            retry = False
        return choice

def Result(player1 = 0, player2 = 0):
    if (player1 == 0) or (player == 0):
        raise AttributeError("Number is not correctly")
        return 0
    if player1 is player2:
        return "No one"
    elif player1 == 1 and player2 == 2:
        return "player2"
    elif player1 == 1 and player2 == 3:
        return "player1"
    elif player1 == 2 and player2 == 1:
        return "player1"
    elif player1 == 2 and player2 == 3:
        return "player2"
    elif player1 == 3 and player2 == 1:
        return "player2"
    elif player1 == 3 and player2 == 2:
        return "player1"
    else:
        return "Tie"

def win(result):
    print("\n\n" + "-"*30)
    print("\n\n{} Wins!!!!".format(result))
    print("\n\n" + "-"*30 + "\n\n")

def AskAgain(play, Bot):
    print("If You Want To Play Please Click \"y\"\nIf not Press \"n\"\nif You Want To Change player VS Setting Press \"s\"")
    try:
        choice = input()
    except:
        print("your Choice was invalid")
        sys.exit(1)
    if choice == "y" or choice == "Y":
        play = True
    elif choice == "n" or choice == "N":
        sys.exit(1)
    elif choice == "s" or choice == "S":
        print("If Play with Bot press \"b\"\nIf Want to Play (Player VS Player) press \"p\"")
        choice = input()
        if choice == "b" or choice == "B":
            Bot = True
        elif choice == "p" or choice == "P":
            Bot = False
        else:
            sys.exit(1)
    else:
        sys.exit(1)
    return (play,Bot)

def main(play=True,bot=False):

    player1 = player()
    player2 = player()
    list = ["","Rock" , "Paper" , "Scissor"]
    while play:
        play, bot = AskAgain(play,bot)
        player2choice = player2.Choice(bot)
        player1choice = player1.Choice()
        print("player1 : " + list[player1choice] + " VS " + "player2 : " + list[player2choice])
        win(Result(player1choice , player2choice))

main()
