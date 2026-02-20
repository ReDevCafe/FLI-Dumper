#include "stdafx.h"


#include "Frontend/Windows/HelloWindow.h"
#include "Frontend/Windows/DumpProgress.h"
#include "Frontend/Windows/PackageWindow.h"
#include "Frontend/Windows/PackageViewerWindow.h"
#include "Frontend/Windows/LiveEditor.h"
#include "Frontend/Windows/LogWindow.h"
#include "Frontend/Windows/TopRowButtons.h"
#include <Frontend/IGHelper.h>

#include "Engine/Generation/SDK.h"
#include "Engine/Userdefined/FeatureFlags.h"
#include "Frontend/Texture/TextureCreator.h"
#include "Memory/memory.h"
#include <Settings/EngineSettings.h>
#include "Memory/GSpot.h"

/*
*    ██╗░░░██╗███████╗  ██████╗░██╗░░░██╗███╗░░░███╗██████╗░███████╗██████╗░
*    ██║░░░██║██╔════╝  ██╔══██╗██║░░░██║████╗░████║██╔══██╗██╔════╝██╔══██╗
*    ██║░░░██║█████╗░░  ██║░░██║██║░░░██║██╔████╔██║██████╔╝█████╗░░██████╔╝
*    ██║░░░██║██╔══╝░░  ██║░░██║██║░░░██║██║╚██╔╝██║██╔═══╝░██╔══╝░░██╔══██╗
*    ╚██████╔╝███████╗  ██████╔╝╚██████╔╝██║░╚═╝░██║██║░░░░░███████╗██║░░██║
*    ░╚═════╝░╚══════╝  ╚═════╝░░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚══════╝╚═╝░░╚═╝ By Spuckwaffel#5000
*
*   Special thanks to Blue Fire for the idea, help and suggestions.
*   Also special thanks to guttir14 (and all contributers to UnrealDumper-4.25) and CorrM (and all contributers to Unreal-Finder-Tool),
*   I've used their projects as a reference while making this tool.
*
*   Also special thanks to the contributors of this project!
*
*   Feel free to contribute to this project as it is defenitely not perfect.
*   Do not open any issues regarding "what can be done better for % performance" or "do x instead of y" that requires rewriting
*   the entire source code, I couldnt care less, you can do that.
*   Please remember this took long enough and is after all free and open source.
*/


/**
 * \brief Main program function
 * \return EXIT_SUCCESS
 */
int main()
{
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "**********************************");
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "Loading FLI-Dumper...");
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "%s", EngineSettings::getDumperVersion().c_str());
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "**********************************");
    Memory();
    Memory::load("NFL1-Win64-Shipping.exe");
    std::vector<Offset> offsets = GSpot::findOffsets();
	for (const auto& offset : offsets)
    {
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "GSPOT", "Found offset: %s at 0x%p", offset.name.c_str(), offset.offset);
    }
    EngineCore::setOffsets(offsets);
    windows::DumpProgress();
    windows::DumpProgress::dump();
    int anyProgressDone = 0;
    int anyProgressTotal = 1;
    EngineSettings::setWorkingDirectory("export");
	std::filesystem::create_directories(EngineSettings::getWorkingDirectory());
    SDKGeneration::Generate(anyProgressDone, anyProgressTotal, FeatureFlags::SDK::STABLE);
    EngineSettings::loadMacros();
    return EXIT_SUCCESS;
}