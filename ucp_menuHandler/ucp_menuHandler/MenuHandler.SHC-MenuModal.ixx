export module MenuHandler.SHC:MenuModal;

import :Menu;

export {
  namespace SHC
  {
    enum class MenuModalID {
      NO_MENU                           = 0,
      DEBUG_DATA_CURRENT_PLAYER_DATA    = 1,
      DEBUG_DATA_UNIT_DATA              = 2,
      DEBUG_DATA_ZONE_DATA              = 3,    // ?
      DEBUG_DATA_NETWORK                = 4,
      PAUSE_MENU                        = 5,
      VIDEO_OPTIONS                     = 6,
      SOUND_OPTIONS                     = 7,
      NETWORK_OPTIONS                   = 8,
      LOAD_MAP                          = 9,
      SAVE_MAP                          = 10,
      YES_NO_DIALOG                     = 11,   // Also used for quiting, so when is QUIT_DIALOG used instead of this?
      PAUSE_MENU_OPTIONS                = 12,
      GAMEPLAY_OPTIONS                  = 13,
      PROGRESS_BAR_BOX                  = 14,
      BUILDING_HELP_TEXT                = 15,
      CHOOSE_NETWORK_SERVICE_PROVIDER   = 17,
      FINDING_NETWORK_SESSIONS          = 18,
      DISPLAY_AI_LORD_MESSAGE           = 19,
      WAITING_FOR_HOST                  = 21,
      UNUSED_SET_NAME                   = 22,
      OVERLAY_SLIDER                    = 23,   // Used for example by the invasion and event sliders.
      UNUSED_WIN_CONDITION              = 24,
      MAP_DESCRIPTION_EDITOR            = 25,
      DISPLAY_SCENARIO_HELP_TEXT        = 26,   // It also seems to be heavily realted to the help text editor, but I can not test how.
      CHAT                              = 27,
      IN_GAME_HELP_TEXT                 = 28,
      QUIT_DIALOG                       = 29,   // Uncertain about the differences between this and YES_NO_DIALOG.
      CREDITS_SCROLL                    = 30,
      EDITOR_MAP_TYPE_QUICK_CHANGE      = 31,
      SKIRMISH_CONNECTION_OPTIONS       = 32,   // These include game tempo and auto save and has nothing to do with the connection itself.
      ONLINE_QUIT_GAME                  = 33,
      ONLINE_VOTE_QUIT_GAME             = 34,
      IDENTITY_OPTIONS                  = 35,
      ENTER_TITLE_ON_GAME_START         = 36,
      SKIRMISH_PLAY_OPTIONS             = 37,
      CREATE_OR_TRIGGER_INVASION        = 38,
      TRIGGER_EVENT                     = 39,   // Event selection when event is directly triggered.
      TRIGGER_EVENT_OR_INVASION         = 40,   // Opens the window to directly choose an event or and invasion to take place.
      TRIGGER_EVENT_SLIDER              = 41,   // Used if a single event is directly triggered.
      SEND_MAP_TO                       = 42,
      RECEIVE_MAP_FROM                  = 43,
      MAIN_MENU_OPTIONS                 = 44,
      UNUSED_CHOOSE_MESSAGE_BOX         = 100,
      TRADER_SETTINGS                   = 101,
      START_GOODS                       = 102,
      NEW_INVASION                      = 103,
      UNUSED_CREATE_TIMED_MESSAGE_EVENT = 104, // It contains a date to set. So maybe this was intened as both condition and event?
      NEW_EVENT                         = 105,
      NEW_EVENT_CONDITION               = 108,
      NEW_EVENT_ACTION                  = 109,
      UNUSED_CREATE_MESSAGE_EVENT       = 110,
      UNUSED_SIEGE_ATTACKING_FORCE      = 111, // ?
      BUILDING_AVAILABILITY             = 112,
      TUTORIAL_BOX                      = 113,
      TUTORIAL_BOX_WITH_LEAVE           = 114,
      DISABLE_EURO_TROOPS               = 115,
      DISABLE_WEAPON                    = 116,
      DISABLE_ARAB_TROOPS               = 117,
      BASIC_AI_LORD_SELECT              = 118,
      EXTENDED_AI_LORD_SELECT           = 119,
      ROUNDTABLE                        = 120,
      ALLIES                            = 121,
      ALLIES_ORDER                      = 122,
      ALLIES_REQUEST_GOODS              = 123,
      ALLIES_SEND_GOODS                 = 124,
      GREATEST_LORD                     = 125,
      CHOOSE_RANDOM_NUMBER_OF_ENEMIES   = 126,
      DEBUG_DATA_AIV_STATE              = 128, // ?
      DELETE_GAME_RECORD                = 129,
      TACTICAL_POWER_BAR                = 130,
      DEBUG_DATA_SPLIT_INFO             = 200,
      DEBUG_DATA_MAP_DATA               = 201,
      DEBUG_DATA_MOUSE_POINTING         = 202,
      DEBUG_DATA_AI_INFO                = 203,
      NONE                              = -1,
    };

    using MenuModalRenderFunction = void(__cdecl*)(int x, int y, int width, int height);

    struct MenuModal {
      MenuModalID menuModalID;
      int x;
      int y;
      int width;
      int height;
      int borderStyle; /* 512 is the nice red double border. */
      int backgroundColourIndex;
      MenuModalRenderFunction* menuModalRenderFunction;
      Menu* pointerToMenu;
      MenuModal* pointerToNextModalMenu;
    };
  }
}