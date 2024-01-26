-- Users Table
CREATE TABLE Users (
    UserID INT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL,
    PhoneNo VARCHAR(15) NOT NULL
);

-- Events Table
CREATE TABLE Events (
    EventID INT PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    StartDate DATE NOT NULL,
    EndDate DATE NOT NULL,
    Status VARCHAR(20) CHECK (Status IN ('Pending', 'In-progress', 'Completed', 'Canceled'))
);

-- EventDays Table
CREATE TABLE EventDays (
    EventDayID INT PRIMARY KEY,
    EventID INT,
    Date DATE,
    FOREIGN KEY (EventID) REFERENCES Events(EventID)
);

-- Invitations Table
CREATE TABLE Invitations (
    InvitationID INT PRIMARY KEY,
    EventID INT,
    InviterUserID INT,
    InviteeUserID INT,
    InvitationStatus VARCHAR(20) CHECK (InvitationStatus IN ('Accepted', 'Rejected', 'Pending')),
    FOREIGN KEY (EventID) REFERENCES Events(EventID),
    FOREIGN KEY (InviterUserID) REFERENCES Users(UserID),
    FOREIGN KEY (InviteeUserID) REFERENCES Users(UserID)
);
