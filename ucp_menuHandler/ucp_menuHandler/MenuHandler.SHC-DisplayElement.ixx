export module MenuHandler.SHC:DisplayElement;

export {
  namespace SHC {
    /* The display element IDs used by the game. */
    enum class DisplayElementID {
      UNKNOWN_0                           = 0,
      BOTTOM_LEFT_DATE                    = 1,
      CONNECT_AND_PATH_LINKAGE_INFO_TEXT  = 2,
      IN_GAME_CHAT                        = 3,  // ?
      RESOURCE_MISSING_1                  = 4,
      RESOURCE_MISSING_2                  = 5,
      DEBUG_NUMBERS                       = 6,
      UNKNOWN_7                           = 7,
      SOME_MISSION_NUMBER                 = 9,  // ?
      IN_GAME_STARTING_GOODS_COUNTER      = 12,
      NO_TREE_GROWTH                      = 14,
      WIN_DEFEAT_WINDOW                   = 16,
      MISSION_WIN_DEFEAT_BANNER           = 17,
      UNKNOWN_18                          = 18,
      SOME_MULTIPLAYER_INFO_1             = 19, // ?
      KEEP_AND_GRANERY_PLACEMENT_INFO     = 20,
      PLAYER_INFO_ON_HOVER                = 21,
      PLAYER_PING                         = 22, // ?
      GAME_PAUSED_TEXT                    = 23,
      GAME_SPEED_TEXT                     = 24,
      UNKNOWN_25                          = 25,
      TIME_UNTIL_VICTORY                  = 26,
      TIME_UNTIL_DEFEAT                   = 27,
      SOME_MULTIPLAYER_INFO_2             = 28, // ?
      PEOPLE_LEFT_TO_PLACE                = 29,
      NO_RUSH                             = 30,
    };

    /* These values state the relative position of the display element. */
    enum class DisplayElementPositionModifier {
      MAIN_MENU_X_Y = 0,
      RESOLUTION_Y = 1,
      TOWARDS_MID_Y = 2,
      RESOLUTION_X = 4,
      TOWARDS_MID_X = 8
    };

    using DisplayElementRenderFunc = void(__cdecl*)(int posX, int posY, int elementState);

    /* This structures seems to be a non-interactive overlay display element, which is only rendered in-game. */
    struct DisplayElement {
      int x;
      int y;
      DisplayElementID elementID;
      int elementState; // ?
      int activationTime;
      int displayDuration;
      DisplayElementRenderFunc* renderFunction;
      DisplayElementPositionModifier positionModifier;
      DisplayElement* nextDisplayElement;
    };
  }
}