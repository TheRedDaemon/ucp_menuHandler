export module MenuHandler.SHC:Menu;

export {
  namespace SHC
  {
    struct MenuItem;

    struct Menu {
      MenuItem* menuItems;
      int x; // ?
      int y; // ?
      int unknown_0xc;
      int unknown_0x10;
      int currentBuildMenuButtonShift; // ?
      int unknown_0x18;
      int unknown_0x1c;
      int unknown_0x20;
      int unknown_0x24;
      int unknown_0x28;
      int unknown_0x2c;
      int unknown_0x30;
      int someTimestamp; // ?
      MenuItem* hoveredItem;
      MenuItem* someMenuItemPtr; // ?
      int unknown_0x40;
    };
  }
}