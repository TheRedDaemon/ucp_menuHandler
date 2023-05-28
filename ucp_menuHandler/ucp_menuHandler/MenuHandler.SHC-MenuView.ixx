export module MenuHandler.SHC:MenuView;

export {
  namespace SHC
  {
    enum class MenuViewID {
      NO_VIEW                                 = 0,
      UNUSED_OLD_TITLE_MENU                   = 1,    // This one seems to should display a simple "FireFly's Crusader" over a now not present gm file.
      INTRO_LOGOS                             = 3,
      EMPTY_10                                = 10,   // There is no MenuView, a "last" MenuItem and a menu. Might be something removed in general, or from the release build.
      EMPTY_11                                = 11,   // There is no MenuView, a "last" MenuItem and a menu. Might be something removed in general, or from the release build.
      MAP_EDITOR_LANDSCAPING                  = 12,
      BUILD_MENU                              = 14,
      BUILDING_AND_STATUS_MENU                = 16,
      MAP_EDITOR_PROPERTIES                   = 17,
      NEW_MAP_MAPTYPE                         = 18,
      MP_CONNECTION                           = 19,
      LOBBY_MENU                              = 20,
      UNKNOWN_21                              = 21,   // There is a menu modal that is prepared, but this one sadly already crashed the game on normal tests.
      UNUSED_HELP_TEXT_EDITOR                 = 22,   // It shows sign of a help or scenario menu, but I was unable to get it to render. It has a menu items for editing the help texts, though.
      UNUSED_SOME_MISSION_START               = 25,   // ?; This one uses the main menu border, but only displays the first loaded image per frame. The two requested resources are "multi_background.tgx" and "gm_fly.tgx". Neither is part of the games files.
      UNKNOWN_26_CAMPAIGN_RELATED             = 26,   // ?; If tested by replacing the credits, it transitions to the intro logo and then to the first historical mission.
      UNKNOWN_27_CAMPAIGN                     = 27,   // ?; It loads the old campaign sources it seems. That being said, I think other parts of the game do not support the needed space anyway.
      SCENARIO_DESCRIPTION                    = 28,
      MISSION_FINISHED_TRANSITION             = 29,   // During test played a success animation and then switched to empty pages from the historical campaign. Might be dependent on the state and actually for more cases responsible.
      GAME_LOST                               = 30,   // ?
      NEW_MAP_MAPSIZE                         = 31,
      UNUSED_CHOOSE_AVAILABLE_KEEPS           = 32,   // It was intended to be part of the editor menu it seems.
      UNKNOWN_33                              = 33,   // Actually only has something for the every frame action and does something with the build menu. Maybe something for a transition?
      SINGLEPLAYER_MAP_CHOICE                 = 35,   // Used for custom scenario and castle builder. In its core it presents the player a list of maps and a map thumbnail.
      UNUSED_CHOOSE_GAME_TYPE                 = 37,   // Also part of the editor and contains the old map types from 1.
      HISTORIC_MISSION_SELECT                 = 38,
      UNUSED_ECONOMIC_MISSION_SELECT          = 39,   // ?; It uses the initial and framewise render function of the historic mission select. Maybe left from the economic campaign?
      GAME_START_ENTER_NAME                   = 40,
      MAIN_MENU                               = 41,
      HISTORIC_CAMPAIGN_SELECT                = 42,
      UNUSED_ECONOMIC_GAMETYPE_SELECT         = 43,
      CUSTOM_SCENARIOS                        = 44,
      CREDITS                                 = 45,
      UNUSED_DEMO_BUY_IT_SCREEN               = 46,   // Basically just displays a not present TGX. No idea if even more is missing.
      UNUSED_CREATE_SIEGE                     = 47,   // Even partially functional. However, no map is provided and only walls and european units work.
      INTRO_VIDEO                             = 48,
      UNKNOWN_49_DOES_NOTHING                 = 49,   // ?; Has no functions that do something for the MenuView and breaks the rendering of the main menu. No idea if it is used in any way.
      HISTORIC_MISSION_PICTURE                = 50,
      HISTORIC_MISSION_INTRO                  = 51,
      HISTORIC_CAMPAIGN_INTRO                 = 52,
      HISTORIC_CAMPAIGN_OUTRO                 = 53,
      UNUSED_SELECT_RANDOM_NUMBER_OF_ENEMIES  = 54,   // The icon in the skirmish menu does not lead here.
      SELECT_CRUSADE                          = 55,
      CRUSADE_MISSION_INTRO                   = 56,
      CRUSADE_MAP                             = 57,
      RANKING_GAMES                           = 58,
      UNUSED_EXTREME_AD                       = 59,
      UNKNOWN_60                              = 60,   // May be an empty, but it shares its basically empty MenuItems with other MenuViews, so it is treaded as Unknown.
      UNKNOWN_61_RETURN_TO_SKIRMISH_MENU      = 61,   // ?; It kinda leads to the skirmish menu, but the started game do not function. It stores the last settings state. Maybe this menu is used to return to the skirmish menu.
      CRUSADE_ENDSCREEN                       = 62,
      EDIT_SCENARIO                           = 1002,
      MENUVIEWID_MENU_PAIR_ENDMARKER          = -1,
    };

    using MenuViewPrepare = void(__cdecl*)();
    using MenuViewDoInitial = void(__cdecl*)();
    using MenuViewDoEveryFrame = void(__cdecl*)();

    /* General struct that composes an actual menu, like the main menu. */
    struct MenuView {
      int unknown_0x0;
      MenuViewID menuViewID;
      MenuView* nextMenuViewPtr;
      MenuViewPrepare* prepare;
      MenuViewDoInitial* doInitial;
      MenuViewDoEveryFrame* doEveryFrame;
    };
  }
}