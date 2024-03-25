-- noinspection SqlDialectInspectionForFile
-- noinspection SqlNoDataSourceInspectionForFile

CREATE TABLE [IF NOT EXISTS] [dbo].users (
    Id TEXT PRIMARY KEY NOT NULL,
    Status int NOT NULL DEFAULT 0,
    UserName TEXT NOT NULL,
    Password TEXT NOT NULL,
    Email TEXT NOT NULL,
    CreatedAt TEXT NOT NULL,
    UpdatedAt TEXT NOT NULL,
    LastLoginDate TEXT NOT NULL,
    DeletedAt TEXT,
) [WITHOUT ROWID];

