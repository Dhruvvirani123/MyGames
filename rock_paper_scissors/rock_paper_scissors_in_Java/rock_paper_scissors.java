package rock_paper_scissors;

import java.util.Scanner;
import java.util.Random;

enum Choice {
	ROCK, PAPER, SCISSORS
}

public class rock_paper_scissors {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();

		System.out.println("Welcome to Rock, Paper, Scissors!");

		while (true) {
			System.out.print("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors, -1 to quit): ");
			int playerChoice = scanner.nextInt();

			if (playerChoice == -1) {
				System.out.println("Thanks for playing. Goodbye!");
				break;
			}

			if (playerChoice < 0 || playerChoice > 2) {
				System.out.println("Invalid choice. Please try again.");
				continue;
			}

			Choice player = Choice.values()[playerChoice];
			int computerChoice = random.nextInt(3);
			Choice computer = Choice.values()[computerChoice];

			System.out.print("You chose: ");
			switch (player) {
			case ROCK:
				System.out.println("Rock");
				break;
			case PAPER:
				System.out.println("Paper");
				break;
			case SCISSORS:
				System.out.println("Scissors");
				break;
			}

			System.out.print("Computer chose: ");
			switch (computer) {
			case ROCK:
				System.out.println("Rock");
				break;
			case PAPER:
				System.out.println("Paper");
				break;
			case SCISSORS:
				System.out.println("Scissors");
				break;
			}

			if (player == computer) {
				System.out.println("It's a tie!");
			} else if ((player == Choice.ROCK && computer == Choice.SCISSORS)
					|| (player == Choice.PAPER && computer == Choice.ROCK)
					|| (player == Choice.SCISSORS && computer == Choice.PAPER)) {
				System.out.println("You win!");
			} else {
				System.out.println("Computer wins!");
			}

			System.out.println();
		}
	}
}