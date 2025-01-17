#pragma once

typedef enum suit{
    CLOVER, DIAMOND, HEART, SPADE
}suit_t;

typedef enum hand{
    HIGH_CARD, ONE_PAIR, TWO_PAIR, THREE_CARD, STRAIGHT, FLASH, FULLHOUSE, FOUR_CARD, STRAIGHT_FLASH, ROYAL_STRAIGHT_FLASH, NONE
}hand_t;

typedef enum player_state {
    FALLED, PLAYING, RETIREMENT
}player_state_t;

typedef struct card {
    suit_t suit;
    int number;
}card_t;

typedef struct player {
    char player_name[1024];
    int coin;
    int latch;
    card_t hand_card[2];
    hand_t hand;
    unsigned int rank;
    player_state_t state;
} player_t;

enum return_status {
    SUCCESS, ALMOST_FALLED, SHOWDOWN
};

enum bet_return_status {
    BET_SUCCESS = 0, LATCH_TOO_MUCH = -1, LATCH_MINUS = -2, HAVING_COIN_MINUS = -3, LATCH_ZERO = -4
};