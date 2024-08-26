#pragma once
#include "../src/Globals/hIncludes.h"

#include <ImGui/imgui.h>
#include <Globals/hGlobals.h>
#include <Menu/ImGuiCustomElements.h> 


void RenderMenu()
{
	ImGui::SetNextWindowSizeConstraints(ImVec2(400, 450), ImVec2(1366, 768));
	C_Elements::CustomizeMenuTitleBar();
	ImGui::Begin("Overlay Menu");
	
	if (ImGui::BeginTabBar("Cheats Type"))
	{
		if (ImGui::BeginTabItem("Visuals"))
		{
			C_Elements::LeaveLine();
			ImGui::TextColored(ImVec4(0, 183, 0, 255), "Safe to Use! No Memory Written!");
			C_Elements::Checkbox("Esp", &Flags::enableEsp);
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Memory"))
		{
			C_Elements::LeaveLine();
			ImGui::TextColored(ImVec4(1, 0, 0, 1), "Not Safe to Use! As it Writes Memory!");
			C_Elements::Checkbox("Aimbot", &Flags::enableAimbot);
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}

	ImGui::End();
}

