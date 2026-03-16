// Difficulty levels for Borderlands 4
// Levels: Easy, Normal, Hard, UVHM1-6

enum DifficultyLevel {
    Easy,
    Normal,
    Hard,
    UVHM1,
    UVHM2,
    UVHM3,
    UVHM4,
    UVHM5,
    UVHM6
};

// Structure for Player Information
struct PlayerInfo {
    int playerId;
    char playerName[50];
    int level;
};

// Structure for Borderlands Session
struct BorderlandsSession {
    char missionName[100];
    int currentMissionId;
    char gameMode[50];
    DifficultyLevel difficulty;
    int playerCount;
    int maxPlayers;
    char region[50];
    bool crossplayEnabled;
    bool isPrivate;
    int averagePlayerLevel;
    PlayerInfo playersList[10];  // Assuming a maximum of 10 players
    char sessionId[50];
};
