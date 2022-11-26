#include <gtest/gtest.h>
#include "../header/MiniGame.h"

// DinoGenerator TESTS 
TEST(DinoGeneratorTest, DinoGenerator1){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(1), "What is the most popular dino to the general public: ");
}

TEST(DinoGeneratorTest, DinoGenerator2){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(2), "What dinosaur has 3 horns on its head: ");
}

TEST(DinoGeneratorTest, DinoGenerator3){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(3), "What dino's name means Swfit and Speedy theif: ");
}

TEST(DinoGeneratorTest, DinoGenerator4){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(4), "What dinosaur has a 30 foot long neck: ");
}

TEST(DinoGeneratorTest, DinoGenerator5){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(5), "What dinosaur has large triangular spines on its neck: ");
}

TEST(DinoGeneratorTest, DinoGenerator6){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(6), "");
}

// VERIFICATION TESTS - lowercase
TEST(DinoVerificationTestLowerCase, DinoVerification1){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("t-rex", 1), true);
}

TEST(DinoVerificationTestLowerCase, DinoVerification2){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("triceratops", 2), true);
}

TEST(DinoVerificationTestLowerCase, DinoVerification3){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("velociraptor", 3), true);
}

TEST(DinoVerificationTestLowerCase, DinoVerification4){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("brachiosaurus", 4), true);
}

TEST(DinoVerificationTestLowerCase, DinoVerification5){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("stegosaurus", 5), true);
}

TEST(DinoVerificationTestLowerCase, DinoVerification6){
    MiniGame *gm = new MiniGame();
    ASSERT_EQ(gm -> Verifciation("", 1), false);
}

// VERIFICATION TESTS - UpperCase
TEST(DinoVerificationTestUpperCase, DinoVerification1){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("T-rex", 1), true);
}

TEST(DinoVerificationTestUpperCase, DinoVerification2){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("Triceratops", 2), true);
}

TEST(DinoVerificationTestUpperCase, DinoVerification3){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("Velociraptor", 3), true);
}

TEST(DinoVerificationTestUpperCase, DinoVerification4){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("Brachiosaurus", 4), true);
}

TEST(DinoVerificationTestUpperCase, DinoVerification5){
    MiniGame *gm = new MiniGame();
    EXPECT_EQ(gm -> Verifciation("Stegosaurus", 5), true);
}

TEST(DinoVerificationTestUpperCase, DinoVerification6){
    MiniGame *gm = new MiniGame();
    ASSERT_EQ(gm -> Verifciation("", 1), false);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}