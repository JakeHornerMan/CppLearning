#include <iostream>;

class Log
{
public:
	enum LogLevel {
		LevelError, LevelWarning, LevelInfo
	};

private:
	LogLevel m_LogLevel = LevelInfo;

public:
	void SetLevel(LogLevel level)
	{
		m_LogLevel = level;
	}

	void PrintError(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void PrintWarn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void PrintInfo(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

void RunLog() 
{
	Log log;
	log.SetLevel(Log::LevelWarning);
	log.PrintWarn("This Log Class Works");
}