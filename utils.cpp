



static std::string dirname(const char *path) {
    const char* last_slash = strrchr(path, '/');
    if (last_slash == path) return "/";
    else if (last_slash == nullptr) return ".";
    else
      return std::string(path, last_slash - path);
}