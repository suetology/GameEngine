project "glad"
	kind "StaticLib"
	language "C"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"include/glad/glad.h",
		"include/KHR/khrplatform.h",
		"src/glad.c"
	}

	includedirs
	{
		"include"
	}

	filter "system:windows"
		systemversion "latest"
		staticruntime "on"
		

	filter "configurations:Debug"
		staticruntime "on"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		staticruntime "on"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		staticruntime "on"
		runtime "Release"
		optimize "on"
        symbols "off"