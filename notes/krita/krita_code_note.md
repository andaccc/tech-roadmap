### Krita Achitecture Study

## Entry
krita/main.cc
- ln 672 app.start() -> start app
- app.exec() -> keep event loop 


## libs/ui/KisApplicatio.cpp
- application class
- KisMainWindow
  - menu components -> KActionMenu
  - KisPart
     - manage application resources (main windows, components) 

ln 350 start()
- splashScreen
- plugins
- resources


