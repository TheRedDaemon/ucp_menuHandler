export module MenuHandler.SHC:MenuViewMenuPair;

import :MenuView;
import :Menu;

export {
  namespace SHC
  {
    struct MenuViewMenuPair {
      MenuViewID menuViewID;
      Menu* menuAddress;
    };
  }
}