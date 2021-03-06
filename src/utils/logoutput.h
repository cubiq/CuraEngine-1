/** Copyright (C) 2013 Ultimaker - Released under terms of the AGPLv3 License */
#ifndef LOGOUTPUT_H
#define LOGOUTPUT_H

namespace cura {

void increaseVerboseLevel();
void enableProgressLogging();

//Report an error message (always reported, independed of verbose level)
void logError(const char* fmt, ...);
//Report a warning message (always reported, independed of verbose level)
void logWarning(const char* fmt, ...);
//Report a message if the verbose level is 1 or higher. (defined as _log to prevent clash with log() function from <math.h>)
void log(const char* fmt, ...);
//Report an copyright message (always reported, independed of verbose level)
void logAlways(const char* fmt, ...);

//Report a message if the verbose level is 2 or higher. (defined as _log to prevent clash with log() function from <math.h>)
void logDebug(const char* fmt, ...);

//Report engine progress to interface if any. Only if "enableProgressLogging()" has been called.
void logProgress(const char* type, int value, int maxValue, float percent);

}//namespace cura

#endif//LOGOUTPUT_H
