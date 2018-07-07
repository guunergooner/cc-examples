git_repository(
    name   = "com_github_gflags_gflags",
    commit = "46f73f88b18aee341538c0dfc22b1710a6abedef",
    remote = "https://github.com/gflags/gflags.git",
)

bind(
    name = "gflags",
    actual = "@com_github_gflags_gflags//:gflags",
)

new_git_repository(
    name = "glog_repo",
    remote = "https://github.com/google/glog.git",
    commit = "a6a166db069520dbbd653c97c2e5b12e08a8bb26",
    build_file = "glog.BUILD"
)

bind(
    name = "glog",
    actual = "@glog_repo//:glog"
)
