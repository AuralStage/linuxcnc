void UpdateVScrollBar();
void save_label_comment_edited();
void refresh_label_comment( void );
void clear_label_comment();
void autorize_prevnext_buttons(int Yes);
void ShowMessageBox(char * title,char * text,char * button);
void ShowConfirmationBox(char * title,char * text,void * function_if_yes);
void RefreshOneBoolVar( int Type, int Num, int Val );
void RefreshAllBoolsVars( );
void UpdateAllLabelsBoolsVars( );
void quit_appli();
void MessageInStatusBar( char * msg );
void InitGtkWindows( int argc, char *argv[] );
void UpdateAllGtkWindows( void );

